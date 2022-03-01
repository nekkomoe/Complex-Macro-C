//#include <bits/stdc++.h>
#include <cstdio>

//#define eval(cmd) ({ #cmd; })

#define _if(cmd) ((cmd) ? ({
#define _elif(cmd) ;}) : (cmd) ? ({
#define _else ;}) : ({
#define _endif ;}))
#define _loop(cmd) ({int _LOOPRESULT_ = 0, _LOOPFLAG_ = 0, _LOOPLAST_; while((cmd)) { _LOOPLAST_ = ({
#define _endloop }); if(_LOOPFLAG_) break; } _LOOPFLAG_ ? _LOOPRESULT_ : _LOOPLAST_; })
#define _stop(val) _LOOPFLAG_ = 1, _LOOPRESULT_ = (val); break

#define _eloop(cmd, env ...) ({ env; _loop(cmd)
#define _endeloop _endloop; })

int main() {
    printf("%d, res = %d, eloop = %d\n",
        _if(1 + 1 == 2)
            114514
        _elif(2+3 == 5)
            123456
        _else
            1919810
        _endif,
        
        _loop({static int x = 0; ++ x; printf("x = %d\n", x); (x <= 5);1;})
//            puts("fafa");
            _stop(999);
            101923091203;
        _endloop,
        _eloop(i + j <= k, int i = 0, j = 0; int k = 5)
            printf("i = %d, j = %d\n", i, j);
            if(i + j == 4) { _stop(114514); }
            ++ i, ++ j;
        _endeloop
    );
}

