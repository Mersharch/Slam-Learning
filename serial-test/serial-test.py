import serial

esp = serial.Serial('COM6', 115200)

while True:
    line = esp.readline().decode().strip()
    print(line)