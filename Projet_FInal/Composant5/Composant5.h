#pragma once
#ifndef COMPOSANT5_H
#define COMPOSANT5_H
// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the COMPOSANT5_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// COMPOSANT5_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef COMPOSANT5_EXPORTS
#define COMPOSANT5_API __declspec(dllexport)
#else
#define COMPOSANT5_API __declspec(dllimport)
#endif
#include<string>
#include  "Bloc.h"
using namespace std;
// This class is exported from the Composant5.dll
class COMPOSANT5_API CComposant5 {

public:
	// TODO: add your methods here.
	CComposant5();
	//bool verify_bloc(Bloc b, char hash[HASH_SIZE], int nonce);
	bool verify_bloc(Bloc b, std::string hash_bloc_precedant, int nonce);
	bool verify_hash(Bloc* b, std::string hash_bloc);
	bool verify_transaction(Bloc b);
	bool verify_transaction_input(Bloc* b,TXI* txi);

};

#endif