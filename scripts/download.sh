wkdate=$(date +%j-%A-%d-%B-%Y-%Hh%M)
cmd=pull
echo C00
cd ~/git/C00
git add . ; git commit -m $wkdate ; git $cmd
echo C01
cd ../C01
git add . ; git commit -m $wkdate ; git $cmd
echo C02
cd ../C02
git add . ; git commit -m $wkdate ; git $cmd
echo C03
cd ../C03
git add . ; git commit -m $wkdate ; git $cmd
echo C04
cd ../C04
git add . ; git commit -m $wkdate ; git $cmd
echo C05
cd ../C05
git add . ; git commit -m $wkdate ; git $cmd
echo C06
cd ../C06
git add . ; git commit -m $wkdate ; git $cmd
echo C07
cd ../C07
git add . ; git commit -m $wkdate ; git $cmd
echo C08
cd ../C08
git add . ; git commit -m $wkdate ; git $cmd
# echo C09
# cd ../C09
# git add . ; git commit -m 240722-end ; git $cmd
# echo C10
# cd ../C10
# git add . ; git commit -m 240722-end ; git $cmd
# echo C11new
# cd ../C11new
# git add . ; git commit -m 240722-end ; git $cmd
# echo C12new
# cd ../C12new
# git add . ; git commit -m 240722-end ; git $cmd
# echo C13new
# cd ../C13new
# git add . ; git commit -m 240722-end ; git $cmd
echo notes
cd ../notes-and-docs
git add . ; git commit -m $wkdate ; git $cmd
echo rush00
cd ../rush00
git add . ; git commit -m $wkdate ; git $cmd
echo rush01
cd ../rush01
git add . ; git commit -m $wkdate ; git $cmd
echo rush02
cd ../rush02
git add . ; git commit -m $wkdate ; git $cmd
echo myrush02
cd ../myrush02
git add . ; git commit -m $wkdate ; git $cmd
echo shell00
cd ../shell00
git add . ; git commit -m $wkdate ; git $cmd
echo shell01
cd ../shell01
git add . ; git commit -m $wkdate ; git $cmd
cd ..