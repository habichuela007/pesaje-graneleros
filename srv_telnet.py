#import sys
import socket
#import telnetlib

TCP_IP = '127.0.0.1'
TCP_PORT = 5005
BUFFER_SIZE = 1024  # Normally 1024, but we want fast response

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind((TCP_IP, TCP_PORT))
s.listen(1)

conn, addr = s.accept()
print ('Connection address:', addr)
while 1:
    #data = conn.recv(BUFFER_SIZE)
    data1 = b"character_\n"
    data2 = b"space_\n"
    if not data1: break
    if not data2: break
    print ("received data:", data1)
    print ("received data:", data2)
    conn.send(data1)  # echo
    conn.send(data2)  # echo
conn.close()