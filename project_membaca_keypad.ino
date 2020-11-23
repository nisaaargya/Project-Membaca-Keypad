//Proyek Membaca Keypad
#include <Keypad.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
const byte JmlBaris = 4; 
const byte JmlKolom = 3; 
char keys[JmlBaris][JmlKolom] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};

byte PinBaris[JmlBaris] = {4,3,2,1}; 
byte PinKolom[JmlKolom] = {7, 6, 5}; 
int count=0;
Keypad keypad = Keypad(makeKeymap(keys), PinBaris, PinKolom, JmlBaris, JmlKolom );
void setup(){
  lcd.begin(16,2);
}
  
void loop()
{
  
  char key = keypad.getKey();//cek jika tombol ditekan
  if (key != NO_KEY)
  {
    lcd.print(key); 
    count++; //pindahkan karakter kebaris lcd berikutnya setelah penekanan tombol  
  }
}
