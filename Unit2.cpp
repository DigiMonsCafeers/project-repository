//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit2.h"
#include "Unit1.h"
#include "cjenik.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner){
  _di_IXMLcjenikType cjenik = Getcjenik(XMLDocument1);
  ListView1->Items->Clear();
  for(int i=0; i<cjenik->Count; i++){
	ListView1->Items->Add();
	ListView1->Items->Item[i]->Caption = cjenik->Artikl[i]->Get_Imepica();
	ListView1->Items->Item[i]->SubItems->Add(cjenik->Artikl[i]->Get_Cijena());
}   }
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
_di_IXMLcjenikType cjenik = Getcjenik(XMLDocument1);
int counter = Form1->ListView1->Items->Count;
Form1->ListView1->Items->Add();
Form1->ListView1->Items->Item[counter]->Caption = Form2->ListView1->Items->Item[ListView1->ItemIndex]->Caption;
Form1->ListView1->Items->Item[counter]->SubItems->Add(cjenik->Artikl[Form2->ListView1->ItemIndex]->Get_Cijena());
Form1->Show();
}

