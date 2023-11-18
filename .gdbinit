set auto-load safe-path .

define plist
	set var $n = $arg0
	while $n
		print *($n)
		set var $n = $n->next
	end
end

define isnull
if $arg0 == 0
	echo "O ponteiro é nulo\n"
else
	echo "O ponteiro não é nulo\n"
end

define list_size
	set $size = 0
	set $current = $arg0
	while $current != 0
	set $size = $size + 1
	set $current = $current->next
	end
	print "Tamanho da linked list: %d\n", $size
end

