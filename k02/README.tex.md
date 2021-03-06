# 課題2 レポート

aa83988848 薗田光太郎

## 課題

住んでるA県で生まれた（ジモティー）20代の男性の平均と分散が$\mu_{A}=170.8$,$\sigma^2_{A}={5.43}^2$と公式発表された．また，隣のB県生まれの男性は，平均と分散が$\mu_{B}=169.7$,$\sigma^2_{B}={5.5}^2$と公式発表されている．このとき，手元の標本の尤もらしさ（尤度）をA県生まれとB県生まれについて求めよ．実際にはもちろんA県・B県以外の県で生まれる人もいるし，標本の全員が同じ県生まれということはないので，この結果の大小からは何も言えない．
   
まず`double p_stdnorm(double y)`を，平均0，分散1の正規分布（標準正規分布;$N(0,1)$）における値$y$の出現確率を出力する関数を作成せよ．
良く知られているように，平均0，分散1の正規分布に従う値$y$の出現確率は，
$$
  f(x) = \frac{1}{\sqrt{2\pi}}{\rm e}^{-\frac{x^2}{2}}
$$
である．これを関数化したものが`p_stdnorm`である．

平均$\mu$，分散$\sigma^2$の正規分布（$N(\mu,\sigma^2)$）の確率密度曲線は標準正規分布$N(0,1)$の確率密度曲線と相似である．相似において，$N(0,1)$における$y$が，$N(\mu,\sigma^2)$における$x$に対応しているとすると，$y$は$x$を使って，$y=\dfrac{x-\mu}{\sigma}$と書ける．この操作を$x$の「標準化」という．つまり，どんな正規分布上の変数も$y$を求めるとそれは標準正規分布に従う．

尤度とは，標本$x_1\sim x_N$と仮定分布$p$の類似度をあらわす．仮定分布のもとで標本中のデータのそれぞれが同時に出現する同時確率である．尤度$L$は

$$
L(\theta) = \prod_{i=1}^{N} p(x_i,\theta) = p(x_1,\theta)*p(x_2,\theta)*\dots *p(x_N,\theta)
$$

と計算できる．$p$は仮定した確率密度関数で，$\theta$はその母数．$p$が正規分布なら，$\theta$は，平均$\mu$と分散$\sigma^2$である．

## ソースコードの説明

## 入出力結果

```
Likelihood for A：
Likelihood for B：
```

## 修正履歴

