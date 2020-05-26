
// ************************************************************** //
//                                                              
//                       XML Data Binding                       
//                                                              
//         Generated on: 18.5.2020. 13:51:36                    
//       Generated from: D:\Janko faks\OOP\seminar\cjenik.xml   
//   Settings stored in: D:\Janko faks\OOP\seminar\cjenik.xdb   
//                                                              
// ************************************************************** //

#include <System.hpp>
#pragma hdrstop

#include "cjenik.h"


// Global Functions 

_di_IXMLcjenikType __fastcall Getcjenik(Xml::Xmlintf::_di_IXMLDocument Doc)
{
  return (_di_IXMLcjenikType) Doc->GetDocBinding("cjenik", __classid(TXMLcjenikType), TargetNamespace);
};

_di_IXMLcjenikType __fastcall Getcjenik(Xml::Xmldoc::TXMLDocument *Doc)
{
  Xml::Xmlintf::_di_IXMLDocument DocIntf;
  Doc->GetInterface(DocIntf);
  return Getcjenik(DocIntf);
};

_di_IXMLcjenikType __fastcall Loadcjenik(const System::UnicodeString& FileName)
{
  return (_di_IXMLcjenikType) Xml::Xmldoc::LoadXMLDocument(FileName)->GetDocBinding("cjenik", __classid(TXMLcjenikType), TargetNamespace);
};

_di_IXMLcjenikType __fastcall  Newcjenik()
{
  return (_di_IXMLcjenikType) Xml::Xmldoc::NewXMLDocument()->GetDocBinding("cjenik", __classid(TXMLcjenikType), TargetNamespace);
};

// TXMLcjenikType 

void __fastcall TXMLcjenikType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("Artikl"), __classid(TXMLArtiklType));
  ItemTag = "Artikl";
  ItemInterface = __uuidof(IXMLArtiklType);
  Xml::Xmldoc::TXMLNodeCollection::AfterConstruction();
};

_di_IXMLArtiklType __fastcall TXMLcjenikType::Get_Artikl(int Index)
{
  return (_di_IXMLArtiklType) List->Nodes[Index];
};

_di_IXMLArtiklType __fastcall TXMLcjenikType::Add()
{
  return (_di_IXMLArtiklType) AddItem(-1);
};

_di_IXMLArtiklType __fastcall TXMLcjenikType::Insert(const int Index)
{
  return (_di_IXMLArtiklType) AddItem(Index);
};

// TXMLArtiklType 

System::UnicodeString __fastcall TXMLArtiklType::Get_Imepica()
{
  return GetChildNodes()->Nodes[System::UnicodeString("Ime")]->Text;
};

void __fastcall TXMLArtiklType::Set_Imepica(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("Ime")]->NodeValue = Value;
};

int __fastcall TXMLArtiklType::Get_Cijena()
{
  return GetChildNodes()->Nodes[System::UnicodeString("Cijena")]->NodeValue.operator int();
};

void __fastcall TXMLArtiklType::Set_Cijena(int Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("Cijena")]->NodeValue = Value;
};
