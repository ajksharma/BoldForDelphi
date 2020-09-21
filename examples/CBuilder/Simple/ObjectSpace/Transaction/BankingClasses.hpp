/*****************************************/
/*      This file is autogenerated       */
/*   Any manual changes will be LOST!    */
/*****************************************/
/* Generated 2002-01-04 15:45:55         */
/*****************************************/
/* This file should be stored in the     */
/* same directory as the form/datamodule */
/* with the corresponding model          */
/*****************************************/
/* Copyright notice:                     */
/*                                       */
/*****************************************/

#if !defined (BankingClasses_HPP)
#define BankingClasses_HPP

// interface uses

// interface dependancies

// attribute dependancies
#include "BoldAttributes.hpp"

#include <Classes.hpp>
#include <Controls.hpp>
#include <SysUtils.hpp>
#include "BoldDefs.hpp"
#include "BoldSubscription.hpp"
#include "BoldDeriver.hpp"
#include "BoldElements.hpp"
#include "BoldDomainElement.hpp"
#include "BoldSystemRT.hpp"
#include "BoldSystem.hpp"

void unregisterCode();

// forward declarations of all classes }

class TBankingClassesRoot;
class TBankingClassesRootList;
class TAccount;
class TAccountList;
class TRequest;
class TRequestList;
class TClose;
class TCloseList;
class TModifyCredit;
class TModifyCreditList;
class TTransfer;
class TTransferList;

class DELPHICLASS TBankingClassesRoot;
class TBankingClassesRoot : public Boldsystem::TBoldObject
{
typedef Boldsystem::TBoldObject inherited;
private:
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TBankingClassesRoot(Boldsystem::TBoldSystem* aBoldSystem) : Boldsystem::TBoldObject(aBoldSystem, true) { }
  #pragma option pop

};

class DELPHICLASS TAccount;
class TAccount : public TBankingClassesRoot
{
typedef TBankingClassesRoot inherited;
private:
  TBAInteger* __fastcall _Get_M_Total();
  Integer __fastcall _GetTotal();
  void __fastcall _SetTotal(Integer NewValue);
  TBAString* __fastcall _Get_M_Number();
  String __fastcall _GetNumber();
  void __fastcall _SetNumber(String NewValue);
  TBAInteger* __fastcall _Get_M_Credit();
  Integer __fastcall _GetCredit();
  void __fastcall _SetCredit(Integer NewValue);
  TTransferList* __fastcall _Gettransfer1();
  TTransferList* __fastcall _Gettransfer2();
  TClose* __fastcall _Getclose();
  TBoldObjectReference* __fastcall _Get_M_close();
  void __fastcall _Setclose(TClose *value);
  TModifyCredit* __fastcall _GetmodifyCredit();
  TBoldObjectReference* __fastcall _Get_M_modifyCredit();
  void __fastcall _SetmodifyCredit(TModifyCredit *value);
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TAccount(Boldsystem::TBoldSystem* aBoldSystem) : TBankingClassesRoot(aBoldSystem) { }
  #pragma option pop

  Boolean __fastcall ReceiveQueryFromOwned(TObject *Originator, TBoldEvent OriginalEvent, const System::TVarRec * Args, const int Args_Size, Boldsubscription::TBoldSubscriber* Subscriber);
  Boolean __fastcall MayDelete(void);
  __property TBAInteger* M_Total = {read=_Get_M_Total};
  __property TBAString* M_Number = {read=_Get_M_Number};
  __property TBAInteger* M_Credit = {read=_Get_M_Credit};
  __property TTransferList* M_transfer1 = {read=_Gettransfer1};
  __property TTransferList* M_transfer2 = {read=_Gettransfer2};
  __property TBoldObjectReference* M_close = {read=_Get_M_close};
  __property TBoldObjectReference* M_modifyCredit = {read=_Get_M_modifyCredit};
  __property Integer Total = {read=_GetTotal, write=_SetTotal};
  __property String Number = {read=_GetNumber, write=_SetNumber};
  __property Integer Credit = {read=_GetCredit, write=_SetCredit};
  __property TTransferList* transfer1 = {read=_Gettransfer1};
  __property TTransferList* transfer2 = {read=_Gettransfer2};
  __property TClose* close = {read=_Getclose, write=_Setclose};
  __property TModifyCredit* modifyCredit = {read=_GetmodifyCredit, write=_SetmodifyCredit};
};

class DELPHICLASS TRequest;
class TRequest : public TBankingClassesRoot
{
typedef TBankingClassesRoot inherited;
private:
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TRequest(Boldsystem::TBoldSystem* aBoldSystem) : TBankingClassesRoot(aBoldSystem) { }
  #pragma option pop

  virtual void __fastcall Perform(void) = 0;
};

class DELPHICLASS TClose;
class TClose : public TRequest
{
typedef TRequest inherited;
private:
  TAccount* __fastcall _Getaccount();
  TBoldObjectReference* __fastcall _Get_M_account();
  void __fastcall _Setaccount(TAccount *value);
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TClose(Boldsystem::TBoldSystem* aBoldSystem) : TRequest(aBoldSystem) { }
  #pragma option pop

  void __fastcall Perform(void);
  __property TBoldObjectReference* M_account = {read=_Get_M_account};
  __property TAccount* account = {read=_Getaccount, write=_Setaccount};
};

class DELPHICLASS TModifyCredit;
class TModifyCredit : public TRequest
{
typedef TRequest inherited;
private:
  TBAInteger* __fastcall _Get_M_NewCredit();
  Integer __fastcall _GetNewCredit();
  void __fastcall _SetNewCredit(Integer NewValue);
  TAccount* __fastcall _Getaccount();
  TBoldObjectReference* __fastcall _Get_M_account();
  void __fastcall _Setaccount(TAccount *value);
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TModifyCredit(Boldsystem::TBoldSystem* aBoldSystem) : TRequest(aBoldSystem) { }
  #pragma option pop

  void __fastcall Perform(void);
  __property TBAInteger* M_NewCredit = {read=_Get_M_NewCredit};
  __property TBoldObjectReference* M_account = {read=_Get_M_account};
  __property Integer NewCredit = {read=_GetNewCredit, write=_SetNewCredit};
  __property TAccount* account = {read=_Getaccount, write=_Setaccount};
};

class DELPHICLASS TTransfer;
class TTransfer : public TRequest
{
typedef TRequest inherited;
private:
  TBAInteger* __fastcall _Get_M_Amount();
  Integer __fastcall _GetAmount();
  void __fastcall _SetAmount(Integer NewValue);
  TAccount* __fastcall _GetSource();
  TBoldObjectReference* __fastcall _Get_M_Source();
  void __fastcall _SetSource(TAccount *value);
  TAccount* __fastcall _GetTarget();
  TBoldObjectReference* __fastcall _Get_M_Target();
  void __fastcall _SetTarget(TAccount *value);
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TTransfer(Boldsystem::TBoldSystem* aBoldSystem) : TRequest(aBoldSystem) { }
  #pragma option pop

  void __fastcall Perform(void);
  __property TBAInteger* M_Amount = {read=_Get_M_Amount};
  __property TBoldObjectReference* M_Source = {read=_Get_M_Source};
  __property TBoldObjectReference* M_Target = {read=_Get_M_Target};
  __property Integer Amount = {read=_GetAmount, write=_SetAmount};
  __property TAccount* Source = {read=_GetSource, write=_SetSource};
  __property TAccount* Target = {read=_GetTarget, write=_SetTarget};
};

class DELPHICLASS TBankingClassesRootList;
class TBankingClassesRootList : public TBoldObjectList
{
protected:
  TBankingClassesRoot* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TBankingClassesRoot *NewObject);
public:
  int __fastcall Includes(TBankingClassesRoot *anObject);
  int __fastcall IndexOf(TBankingClassesRoot *anObject);
  void __fastcall Add(TBankingClassesRoot *NewObject);
  TBankingClassesRoot* __fastcall AddNew();
  void __fastcall Insert(int index, TBankingClassesRoot *NewObject);
  __property TBankingClassesRoot* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};

class DELPHICLASS TAccountList;
class TAccountList : public TBankingClassesRootList
{
protected:
  TAccount* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TAccount *NewObject);
public:
  int __fastcall Includes(TAccount *anObject);
  int __fastcall IndexOf(TAccount *anObject);
  void __fastcall Add(TAccount *NewObject);
  TAccount* __fastcall AddNew();
  void __fastcall Insert(int index, TAccount *NewObject);
  __property TAccount* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};

class DELPHICLASS TRequestList;
class TRequestList : public TBankingClassesRootList
{
protected:
  TRequest* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TRequest *NewObject);
public:
  int __fastcall Includes(TRequest *anObject);
  int __fastcall IndexOf(TRequest *anObject);
  void __fastcall Add(TRequest *NewObject);
  TRequest* __fastcall AddNew();
  void __fastcall Insert(int index, TRequest *NewObject);
  __property TRequest* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};

class DELPHICLASS TCloseList;
class TCloseList : public TRequestList
{
protected:
  TClose* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TClose *NewObject);
public:
  int __fastcall Includes(TClose *anObject);
  int __fastcall IndexOf(TClose *anObject);
  void __fastcall Add(TClose *NewObject);
  TClose* __fastcall AddNew();
  void __fastcall Insert(int index, TClose *NewObject);
  __property TClose* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};

class DELPHICLASS TModifyCreditList;
class TModifyCreditList : public TRequestList
{
protected:
  TModifyCredit* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TModifyCredit *NewObject);
public:
  int __fastcall Includes(TModifyCredit *anObject);
  int __fastcall IndexOf(TModifyCredit *anObject);
  void __fastcall Add(TModifyCredit *NewObject);
  TModifyCredit* __fastcall AddNew();
  void __fastcall Insert(int index, TModifyCredit *NewObject);
  __property TModifyCredit* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};

class DELPHICLASS TTransferList;
class TTransferList : public TRequestList
{
protected:
  TTransfer* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TTransfer *NewObject);
public:
  int __fastcall Includes(TTransfer *anObject);
  int __fastcall IndexOf(TTransfer *anObject);
  void __fastcall Add(TTransfer *NewObject);
  TTransfer* __fastcall AddNew();
  void __fastcall Insert(int index, TTransfer *NewObject);
  __property TTransfer* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};


char* GeneratedCodeCRC();

#endif
 