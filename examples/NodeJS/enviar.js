const {SerialPort} = require('serialport');

const port = new SerialPort({
    path: 'COM9',
    baudRate: 9600,
  })

port.write("25,-60,28_HolaDesdeNodejs#");