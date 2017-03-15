// file : cage.h

#ifndef CAGE_H
#define CAGE_H

class Cage {
  public:
	/** ctor dengan 4 parameter */
    Cage(int b_1,int k_1,int b_2,int k_2);
	/** @brief Koordinat kiri atas dan kanan bawah dari sebuah cage
	  *	K1, B1 sebagai koordinat x dan y pada sudut kiri atas
	  * K2, B2 sebagai koordinat x dan y pada sudut kanan bawah
	  */
    int GetB1();
    int GetB2();
    int GetK1();
    int GetK2();
  private:
    int b1,b2,k1,k2;
};

#endif
