//
// Created by liamf on 3/26/2022.
//

#include "Money.h"

Money::Money() {
	totalCents = 0;
}

Money::Money(int dollars, int cents) {
	totalCents = 100*dollars + cents;
}

bool Money::operator==(const Money &other) {
	if(totalCents == other.totalCents)
		return true;
	return false;
}

bool Money::operator!=(const Money &other) {
	if(totalCents != other.totalCents)
		return true;
	return false;
}

bool Money::operator<=(const Money &other) {
	if(totalCents <= other.totalCents)
		return true;
	return false;
}

bool Money::operator>=(const Money &other) {
	if(totalCents >= other.totalCents)
		return true;
	return false;
}

bool Money::operator<(const Money &other) {
	if(totalCents < other.totalCents)
		return true;
	return false;
}

bool Money::operator>(const Money &other) {
	if(totalCents > other.totalCents)
		return true;
	return false;
}

Money Money::operator+(const Money &other) {
	int newTotal = totalCents + other.totalCents;
	int newCents = newTotal%100;
	int newDollars = (newTotal-newCents)/100;

	Money newMoney(newDollars, newCents);
	return newMoney;
}

Money Money::operator-(const Money &other) {
	int newTotal = totalCents - other.totalCents;
	int newCents = newTotal%100;
	int newDollars = (newTotal-newCents)/100;

	Money newMoney(newDollars, newCents);
	return newMoney;
}

std::ostream &operator << (std::ostream &out, const Money &money){
	out << "$" << money.totalCents*0.01;
	return out;
}