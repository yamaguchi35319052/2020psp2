# 課題4 レポート

aa83988848 薗田光太郎

## 課題

[../sample/heights.csv]は標本全体（男性と女性合わせた14人）のデータをまとめたものである．
一方，[../sample/IDs.csv]は標本14人の学籍番号（身長データと同じ順番）である．
学籍番号を尋ねて，その学籍番号のデータがリストにあれば，学籍番号，身長，性別のデータを表示し，リストになければ，「No data」と表示せよ．

この二つのファイルを読み取り，学籍番号，身長，性別の3つをメンバーとする構造体の配列で管理するとよい．

## ソースコードの説明

6～11行目　typedefを使いDataという構造体を定義
22行目～　ファイル名を入力し、性別と身長の値を読み取る。
47行目～　IDに関しても同様の操作を行う
68行目～　IDを入力し、該当するものがあるなら性別と身長を出力する。ないならNo dataと出力する。



## 入出力結果

```
Input the filename of sample height:../sample/heights.csv
the filename of sample: ../sample/heights.csv
Input the filename of sample ID:../sample/IDs.csv
the filename of sample: ../sample/IDs.csv
Which ID's data do you want? :45313125
ID : 45313125
gender : female
height : 152.4
```

```
Input the filename of sample height:../sample/heights.csv
the filename of sample: ../sample/heights.csv
Input the filename of sample ID:../sample/IDs.csv    
the filename of sample: ../sample/IDs.csv
Which ID's data do you want? :45313124
No data
```

## 修正履歴
[comment #20200728]
- 修正の指示、アドバイス等は特にありません。引き続き先生に提出をお願いします。

[comment #20200729 sonoda]
- 課題4の完了を確認しました（薗田）
