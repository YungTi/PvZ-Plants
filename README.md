# PvZ-Plants

Class說明
---------------------------------------------------------------------------------------------------------------
Plant:

1.playerAct(): 會印出"Plant Are Guilding!"，回傳-1，因為目前只有Bomb跟Horn會用到。

2.zombieAct(zomATK): 傳入殭屍的攻擊力，回傳植物被攻擊後的血量，如果植物血量<=0會顯示植物死亡。

3.setHp(H): 設定當前血量。

4.returnHp(): 回傳最大血量。

!!!這邊原本設計時有放一個函式printPlant()，但每個植物都有自己的printPlant()，所以我就沒在Plant加這個函式。
!!!maxhp跟cost改為每種植物一個

Bomb:
Bomb:

1.initBomb(MH,C): 傳入並設定最大血量及耗費。

2.zombieAct(Zombie &obj): 傳入殭屍攻擊力，顯示對殭屍造成的傷害以及植物死亡，並根據傷害扣該殭屍血量，回傳0(植物死亡)。

3.printPlant(): 列印當前血量("Bombflower HP: XX")。

4.returnMaxHp(): 回傳最大血量。

5.returnCost(): 回傳耗費。

!!!我們當初設計時有錯，Bomb不需要ATK，他造成的傷害是他的最大血量，所以我就把ATK刪掉了，而且他攻擊後即死亡。


Horn:

1.initHorn(MH,C,A): 傳入並設定好最大血量、耗費及攻擊力。

2.zombieAct(Zombie &obj): 傳入殭屍，顯示對殭屍造成的傷害，以及植物被造成的傷害，並根據傷害扣該殭屍血量，回傳植物被攻擊後的血量。

3.printPlant(): 列印當前血量("Hornflower HP: XX")。

4.returnMaxHp(): 回傳最大血量。

5.returnCost(): 回傳耗費。

!!!zombieAct回傳植物被攻擊後的血量(方便判斷是否死亡)，然後函式會直接扣殭屍的血。


Coin:

1.initCoin(MH,C,R,E): 傳入並設定好最大血量、耗費、最大回合數及賺錢量，CD初始為最大回合數。

2.playerAct(): 將CD-1，如果CD!=0會顯示還需幾次並回傳-1，CD=0時顯示賺多少錢、重置CD並回傳賺錢量。

3.printPlant(): 列印當前血量及所需造訪次數("Mushroom HP: XX (X more visits)")。

4.returnMaxHp(): 回傳最大血量。

5.returnCost(): 回傳耗費。

!!!這邊class及檔案名稱我依照UML取Coin，但列印時我是照老師給的範例取為Mushroom。


Heal:

1.initHeal(MH,C,P): 傳入並設定好最大血量、耗費及回血量。

2.playerAct(): 顯示所有植物回血量，並回傳回血量。

3.printPlant(): 列印當前血量("Healflower HP: XX")。

4.returnMaxHp(): 回傳最大血量。

5.returnCost(): 回傳耗費。

---------------------------------------------------------------------------------------------------------------

如果有什麼地方不方便處理要修改回傳值之類的問題再跟我說一下。
