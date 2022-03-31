//
// Created by liamf on 3/26/2022.
//

#include "Account.h"
#include <sstream>
Account::Account(Money initial) {
	balance = initial;
	deposits.push_back(initial);
	needsUpdate = false;
}

void Account::makeDeposit(Money newDeposit) {
	deposits.push_back(newDeposit);
	needsUpdate = true;
}

void Account::makeWithdrawals(Money newWithdrawal) {
	withdrawals.push_back(newWithdrawal);
	needsUpdate = true;
}

void Account::recalculateBalance() {
	balance = balance - balance;
	for(Money d : deposits)
		balance = balance + d;
	for(Money w : withdrawals)
		balance = balance - w;
}

std::ostream &operator << (std::ostream &out, Account &account){
	if(account.needsUpdate)
		account.recalculateBalance();

	out
		<< "Account Details"
		<< "\n--------------------------"
		<< "\nCurrent Balance:" << account.balance
		<< "\n--------------------------"
		<< "\nNumber of Deposits: " << account.deposits.size()
		<< "\n--------------------------";

	for(int i=0; i<account.deposits.size(); i++)
		out << "\n(" << i+1 << ") " << account.deposits.at(i);

	out << "\n--------------------------"
		<< "\nNumber of Withdrawals: " << account.withdrawals.size()
		<< "\n--------------------";

	for(int i=0; i<account.withdrawals.size(); i++)
		out << "\n(" << i+1 << ") " << account.withdrawals.at(i);

	return out;
}

