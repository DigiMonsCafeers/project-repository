//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include<memory>
#include "Unit1.h"
#include "Unit2.h"
#include "cjenik.h"
#include<string>
#include "ustring.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
ListView1->Items->Item[ListView1->ItemIndex]->Delete();
}


//---------------------------------------------------------------------------

//---------------------------------------------------------------------------


void __fastcall TForm1::Button3Click(TObject *Sender)
{
    ListView1->Items->Item[ListView1->ItemIndex]->SubItems->Add(Edit1->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Klijent->Host = "127.0.0.1";
	Klijent->Port = 5887;
	Klijent->Connect();
	for(int i=0;i<ListView1->Items->Count;i++){
		UnicodeString pp = ListView1->Items->Item[i]->Caption;
		Klijent->Socket->Write(pp.Length());
		Klijent->Socket->Write(pp);}
	Klijent->Disconnect();
    Form3->Show();
}
//---------------------------------------------------------------------------
