const {SerialPort} = require('serialport'); //Librería encargada de la comunicación serial
                                            //Versión 12.0.0        

const port = new SerialPort({
    path: 'COM9',
    baudRate: 9600,
  })

port.on("data", (line) => console.log(line.toString("utf8").trim()));