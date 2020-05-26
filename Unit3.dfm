object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 299
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object porukica: TListBox
    Left = 56
    Top = 56
    Width = 329
    Height = 193
    ItemHeight = 13
    TabOrder = 0
  end
  object Server: TIdTCPServer
    Active = True
    Bindings = <
      item
        IP = '0.0.0.0'
        Port = 12000
      end
      item
        IP = '0.0.0.0'
        Port = 5887
      end>
    DefaultPort = 5887
    OnExecute = ServerExecute
    Left = 560
    Top = 128
  end
end
