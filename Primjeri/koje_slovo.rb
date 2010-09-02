#!/usr/bin/env ruby

ARGV.each { |c|
  puts "#{c.first} = #{c.first.downcase[0]-96}"
}
