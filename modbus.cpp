#include "modbus.h"

ModbusClient::ModbusClient()
{
  
}

int ModbusClient::read_4byte(int first_reg_address, int no_of_regs)
{
  
}

int ModbusClient::read_()


class EnergyMeter
{
  unsigned int id;
  unsigned int baudrate;
  unsigned long input_kwh;
  unsigned long output_kwh;
  float voltage;
  float frequency;
  float current;

  private:

    unsigned int calculateCRC(unsigned char bufferSize) {
      unsigned int temp, temp2, flag;
      temp = 0xFFFF;
      for (unsigned char i = 0; i < bufferSize; i++) {
        temp = temp ^ frame[i];
        for (unsigned char j = 1; j <= 8; j++) {
          flag = temp & 0x0001;
          temp >>= 1;
          if (flag) temp ^= 0xA001;
        }
      }
      // Reverse byte order. 
      temp2 = temp >> 8;
      temp = (temp << 8) | temp2;
      temp &= 0xFFFF;
      return temp; // the returned value is already swopped - crcLo byte is first & crcHi byte is last
    }
  
  public:
     EnergyMeter(unsigned int init_id, unsigned int init_baudrate, Stream serial_port, short int tx_enable_pin){
      
      id = init_id;
      baudrate = init_baudrate;  
     }
     EnergyMeter(){
      id = 1;
      baudrate = 19200;  
     }
};

EnergyMeter::EnergyMeter(int id, int baudrate)

int EnergyMeter::begin()

long EnergyMeter::input_wh()

long EnergyMeter::output_wh()

float EnergyMeter::voltage()

float EnergyMeter::current()

int EnergyMeter::frequency()

int EnergyMeter::update()

