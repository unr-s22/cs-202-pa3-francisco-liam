//
// Created by liamf on 3/26/2022.
//

#ifndef CS_202_PA3_FRANCISCO_LIAM_ACCOUNT_H
#define CS_202_PA3_FRANCISCO_LIAM_ACCOUNT_H
#include "Money.h"
#include <vector>
#include <string>

class Account {
	std::vector<Money> deposits;
	std::vector<Money> withdrawals;
	Money balance;
	bool needsUpdate;
public:
	Account(Money initial);
	void makeDeposit(Money newDeposit);
	void makeWithdrawals(Money newWithdrawal);
	void recalculateBalance();
	friend std::ostream &operator << (std::ostream &out, Account &account);
};


#endif //CS_202_PA3_FRANCISCO_LIAM_ACCOUNT_H
