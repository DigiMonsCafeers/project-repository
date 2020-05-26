object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 467
  ClientWidth = 662
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
    Left = 80
    Top = 40
    Width = 337
    Height = 217
    Columns = <
      item
        Caption = 'Artikl'
        Width = 100
      end
      item
        Caption = 'Cijena'
        Width = 100
      end
      item
        Caption = 'Napomena'
        Width = 130
      end>
    TabOrder = 0
    ViewStyle = vsReport
  end
  object Button1: TButton
    Left = 253
    Top = 320
    Width = 164
    Height = 25
    Caption = 'Ukloni Artikl'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 456
    Top = 64
    Width = 169
    Height = 41
    TabOrder = 2
    Text = 'Napomena'
  end
  object Button2: TButton
    Left = 80
    Top = 384
    Width = 513
    Height = 25
    Caption = 'Po'#353'alji narud'#382'bu'
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 472
    Top = 160
    Width = 148
    Height = 25
    Caption = 'Dodaj Napomenu'
    TabOrder = 4
    OnClick = Button3Click
  end
  object Klijent: TIdTCPClient
    BoundPort = 12000
    ConnectTimeout = 0
    IPVersion = Id_IPv4
    Port = 0
    ReadTimeout = -1
    Left = 528
    Top = 264
  end
end
