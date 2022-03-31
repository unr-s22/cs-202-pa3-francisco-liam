//
// Created by liamf on 3/26/2022.
//

#include "Money.h"
#include "Account.h"
#include <iostream>

int main(){
	Money deposit1(300, 23);
	Account account(deposit1);
	std::cout << account << std::endl;

	Money deposit2(200, 00);
	Money deposit3(300, 24);
	Money deposit4(501, 22);
	account.makeDeposit(deposit2);
	account.makeDeposit(deposit3);
	account.makeDeposit(deposit4);
	std::cout << account << std::endl;

	Money withdrawal1(300, 10);
	Money withdrawal2(201, 34);
	account.makeWithdrawals(withdrawal1);
	account.makeWithdrawals(withdrawal2);
	std::cout << account << std::endl;

	Money withdrawal3(201, 34);

	if(withdrawal2 == withdrawal3){
		std::cout << "== works" << std::endl;
	}
	else{
		std::cout << "== doesn't work" << std::endl;
	}

	if(withdrawal1 != withdrawal3){
		std::cout << "!= works" << std::endl;
	}
	else{
		std::cout << "!= doesn't work" << std::endl;
	}

	if(deposit1 >= deposit2){
		std::cout << ">= > case works" << std::endl;
	}
	else{
		std::cout << ">= > case doesn't work" << std::endl;
	}

	if(withdrawal2 >= withdrawal3){
		std::cout << ">= = case works" << std::endl;
	}
	else{
		std::cout << ">= = case doesn't work" << std::endl;
	}

	if(deposit2 <= deposit3){
		std::cout << "<= < case works" << std::endl;
	}
	else{
		std::cout << "<= < case doesn't work" << std::endl;
	}

	if(withdrawal2 <= withdrawal3){
		std::cout << "<= = case works" << std::endl;
	}
	else{
		std::cout << "<= = case doesn't work" << std::endl;
	}

	if(deposit1 > deposit2){
		std::cout << "> works" << std::endl;
	}
	else{
		std::cout << "> doesn't work" << std::endl;
	}

	if(deposit2 < deposit3){
		std::cout << "< works" << std::endl;
	}
	else{
		std::cout << "< doesn't work" << std::endl;
	}

	return 0;
}