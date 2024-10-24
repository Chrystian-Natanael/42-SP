export ZSH="$HOME/.oh-my-zsh"
ZSH_DISABLE_COMPFIX=true
COMPLETION_WAITING_DOTS="true"
ZSH_HIGHLIGHT_HIGHLIGHTERS=(main brackets pattern cursor)
ZSH_HIGHLIGHT_PATTERNS=('rm -rf *' 'fg=white,bold,bg=red')
setopt RM_STAR_WAIT
export HISTSIZE=32768;
export HISTFILESIZE=$HISTSIZE;
export HISTCONTROL=ignoredups;
export HISTIGNORE="ls:cd:cd -:pwd:exit:date:* --help";
ZSH_THEME="geoffgarside"
plugins=(git git-flow)
source $ZSH/oh-my-zsh.sh
export USER='cnatanae'
export MAIL='cnatanae@student.42sp.org.br'




alias francinette=/nfs/homes/cnatanae/francinette/tester.sh
alias paco=/nfs/homes/cnatanae/francinette/tester.sh
alias gp="git push"
alias gc="git commit -m"
alias gall="git add ."
alias val="valgrind --leak-check=full --show-leak-kinds=all"
alias valm="valgrind  --trace-children=yes --leak-check=full --show-leak-kinds=all --track-fds=yes --track-origins=yes --suppressions=readline.supp --trace-children-skip='*/bin/*,*/sbin/*'"
alias val_p="valgrind --trace-children=yes --track-fds=yes --track-origins=yes --leak-check=full --show-leak-kinds=all --trace-children-skip='*/bin/*,*/sbin/*'"
alias comp="cc -Wall -Wextra -Werror -g3"
alias c="clear"
alias makeclone="git clone git@github.com:Chrystian-Natanael/42-SP.git && mv 42-SP/Makefile Makefile && rm -rf 42-SP"
alias colorclone="git clone git@github.com:Chrystian-Natanael/42-SP.git && mv 42-SP/Colors.hpp Colors.hpp && rm -rf 42-SP"
alias libclone="git clone git@github.com:Chrystian-Natanael/42-SP.git && mv 42-SP/My-LIBFT libft && rm -rf 42-SP && rm -rf libft/*.md && git add libft && git commit -m 'Add libft' && git push"
alias garbclone="git clone git@github.com:Chrystian-Natanael/garbage-collector.git && rm -rf garbage-collector/.git && rm -rf garbage-collector/README.md"
alias gtest="git clone git@github.com:google/googletest.git"
alias utilsclone="git clone git@github.com:Chrystian-Natanael/42-SP.git && mv 42-SP/Makefile Makefile && mv 42-SP/Colors.hpp includes/ && mv 42-SP/gtest-cmake/CMakeLists.txt tests/ && rm -rf 42-SP"
alias gcmake="git clone git@github.com:Chrystian-Natanael/42-SP.git && mv 42-SP/gtest-cmake/CMakeLists.txt . && rm -rf 42-SP"
alias initpj="mkdir src && mkdir includes && mkdir tests && utilsclone && (cd tests && gtest && mkdir my_tests) && echo 'READY!!'"
alias comptest="cd tests && cmake -B build && cd build && make"
alias docker42="git clone git@github.com:Chrystian-Natanael/42-SP.git && mv 42-SP/Dockerfiles/Docker-for42-environment/Dockerfile . && rm -rf 42-SP"

export PATH=$HOME/.local/bin:$PATH
export PATH=$HOME/local/bin:$PATH
