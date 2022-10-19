import sys
import time
import socket
import telnetlib

HOST = "10.1.1.100"
PORT = "9090"

#Open tibbo telnet conn
telnetObj = telnetlib.Telnet(HOST,PORT)

def read_tibbo():
    peso = telnetObj.read_until(b"K")
    time.sleep(0.1)
    #telnetObj.write(b"exit\n")
    print(peso)
#    socket.send_fds(peso)
    
#def transmit_telnet(peso):
#    TCP_IP = '127.0.0.1'
#    TCP_PORT = 9091
#    BUFFER_SIZE = 1024  # Normally 1024, but we want fast response
#    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
#    s.bind((TCP_IP, TCP_PORT))
#    s.listen(1)

#    conn, addr = s.accept()
#    while 1:
#        conn.send(peso)  # echo
#    conn.close()

def run():
    while 1:
        read_tibbo()
    telnetObj.close()

if __name__=='__main__':
    run()