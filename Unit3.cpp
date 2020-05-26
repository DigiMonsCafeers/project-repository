//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::ServerExecute(TIdContext *AContext)
{
	int length = AContext->Connection->Socket->ReadLongInt();
	UnicodeString poruka = AContext->Connection->Socket->ReadString(length);
	AContext->Connection->Disconnect();
	porukica->Items->Add(poruka);
    Form3->Show();
}
//--------------------------------------------------------------------------------------------------------------------------------------------
