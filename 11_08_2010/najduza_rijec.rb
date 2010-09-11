r = gets.chop
puts "Prva najduza rijec:"
puts r.
  split(' ').
  map {|x| [x, x.length]}.
  sort_by {|x| x[1]}.last[0] rescue "Ups ..."

