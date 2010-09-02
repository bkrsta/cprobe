# @o = []
# def k dub, br, n
#   if dub == 0
#     # puts br # sporo!
#     @o << br
#     return
#   end
#   for i in 1..n
#     k dub-1, br*10+i, n
#   end
# end

def cisti_ruby
  puts "Unesi int:"
  k 3, 0, gets.chop.to_i
end

puts "Unesi int:"
# makni endline s kraja unesenog stringa
# i pretvori string u broj
b = gets.chop.to_i
puts "b: #{b}"
# pokreni javascript funkciju
# sa Google-ovim V8 JS engine-om
`v8 kombinacije.js -e "k(3,0,#{b})"`
