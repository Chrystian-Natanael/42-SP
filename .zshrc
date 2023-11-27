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
alias gp="git push"
alias gc="git commit -m"
alias gall="git add ."
alias gpull="git pull"
alias libclone="git clone git@github.com:Chrystian-Natanael/42-SP.git && mv 42-SP/My-LIBFT libft && rm -rf 42-SP && rm -rf libft/*.md && git add libft && git commit -m 'Add libft' && git push"
alias paco=/nfs/homes/cnatanae/francinette/tester.sh
