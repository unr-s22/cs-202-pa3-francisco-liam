//
// Created by liamf on 3/26/2022.
//

#ifndef CS_202_PA3_FRANCISCO_LIAM_MONEY_H
#define CS_202_PA3_FRANCISCO_LIAM_MONEY_H
#include <iostream>


class Money {
	int totalCents;
public:
	Money();
	Money(int dollars, int cents);
	bool operator== (const Money& other);
	bool operator!= (const Money& other);
	bool operator<= (const Money& other);
	bool operator>= (const Money& other);
	bool operator< (const Money& other);
	bool operator> (const Money& other);
	Money operator+ (const Money& other);
	Money operator- (const Money& other);
	friend std::ostream &operator << (std::ostream &out, const Money &money);
};


#endif //CS_202_PA3_FRANCISCO_LIAM_MONEY_H
