object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 435
  ClientWidth = 738
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object ListView1: TListView
    Left = 144
    Top = 48
    Width = 433
    Height = 281
    Columns = <
      item
        Caption = 'Pi'#263'e'
        Width = 100
      end
      item
        Caption = 'Cijena'
        Width = 100
      end>
    TabOrder = 0
    ViewStyle = vsReport
  end
  object Button1: TButton
    Left = 624
    Top = 168
    Width = 75
    Height = 25
    Caption = 'Dodaj'
    TabOrder = 1
    OnClick = Button1Click
  end
  object XMLDocument1: TXMLDocument
    FileName = 'D:\Janko faks\OOP\seminar\cjenik.xml'
    Left = 264
    Top = 184
  end
end
