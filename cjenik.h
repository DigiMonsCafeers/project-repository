
// ************************************************************** //
//                                                              
//                       XML Data Binding                       
//                                                              
//         Generated on: 18.5.2020. 13:51:36                    
//       Generated from: D:\Janko faks\OOP\seminar\cjenik.xml   
//   Settings stored in: D:\Janko faks\OOP\seminar\cjenik.xdb   
//                                                              
// ************************************************************** //

#ifndef   cjenikH
#define   cjenikH

#include <System.hpp>
#include <Xml.Xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Xml.XMLDoc.hpp>
#include <XMLNodeImp.h>
#include <Xml.xmlutil.hpp>


// Forward Decls 

__interface IXMLcjenikType;
typedef System::DelphiInterface<IXMLcjenikType> _di_IXMLcjenikType;
__interface IXMLArtiklType;
typedef System::DelphiInterface<IXMLArtiklType> _di_IXMLArtiklType;

// IXMLcjenikType 

__interface INTERFACE_UUID("{8EED1564-3CD0-4888-BD3D-2EEA30347E10}") IXMLcjenikType : public Xml::Xmlintf::IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLArtiklType __fastcall Get_Artikl(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLArtiklType __fastcall Add() = 0;
  virtual _di_IXMLArtiklType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLArtiklType Artikl[int Index] = { read=Get_Artikl };/* default */
};

// IXMLArtiklType 

__interface INTERFACE_UUID("{4204526D-1221-413A-8F5D-83D3862A146D}") IXMLArtiklType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual System::UnicodeString __fastcall Get_Imepica() = 0;
  virtual int __fastcall Get_Cijena() = 0;
  virtual void __fastcall Set_Imepica(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_Cijena(int Value) = 0;
  // Methods & Properties 
  __property System::UnicodeString Imepica = { read=Get_Imepica, write=Set_Imepica };
  __property int Cijena = { read=Get_Cijena, write=Set_Cijena };
};

// Forward Decls 

class TXMLcjenikType;
class TXMLArtiklType;

// TXMLcjenikType 

class TXMLcjenikType : public Xml::Xmldoc::TXMLNodeCollection, public IXMLcjenikType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLcjenikType 
  virtual _di_IXMLArtiklType __fastcall Get_Artikl(int Index);
  virtual _di_IXMLArtiklType __fastcall Add();
  virtual _di_IXMLArtiklType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLArtiklType 

class TXMLArtiklType : public Xml::Xmldoc::TXMLNode, public IXMLArtiklType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLArtiklType 
  virtual System::UnicodeString __fastcall Get_Imepica();
  virtual int __fastcall Get_Cijena();
  virtual void __fastcall Set_Imepica(System::UnicodeString Value);
  virtual void __fastcall Set_Cijena(int Value);
};

// Global Functions 

_di_IXMLcjenikType __fastcall Getcjenik(Xml::Xmlintf::_di_IXMLDocument Doc);
_di_IXMLcjenikType __fastcall Getcjenik(Xml::Xmldoc::TXMLDocument *Doc);
_di_IXMLcjenikType __fastcall Loadcjenik(const System::UnicodeString& FileName);
_di_IXMLcjenikType __fastcall  Newcjenik();

#define TargetNamespace ""

#endif