OUT_FILE = "test/simulation/out.txt"
File.delete OUT_FILE if File.exists? OUT_FILE 
popened_io = IO.popen("sim30 test/simulation/instructions.txt")
Process.wait(popened_io.pid)
if File.exists? OUT_FILE 
    file_contents = File.read OUT_FILE
    print file_contents
end