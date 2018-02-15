#!/usr/bin/expect -f
# For colors
proc capability cap {expr {![catch {exec tput -S << $cap}]}}
proc colorterm {} {expr {[capability setaf] && [capability setab]}}
proc tput args {exec tput -S << $args >/dev/tty}
array set color {black 0 red 1 green 2 yellow 3 blue 4 magenta 5 cyan 6 white 7}
proc foreground x {exec tput -S << "setaf $::color($x)" > /dev/tty}
proc background x {exec tput -S << "setab $::color($x)" > /dev/tty}
proc reset {} {exec tput sgr0 > /dev/tty}

#Test the program
eval spawn [lrange $argv 0 end]

#Put your test case here

expect "What is the result of calculations on the supercomputer?" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
#send "5050\r"
#expect "result: 100" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
#send "76205685\r"
#expect "result: 12345" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
#send "1471460689765\r"
#expect "result: 1715494" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
send "9223372034707292000\r"
expect "result: 4294967295" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
#send "9223372039002260000\r"
#expect "A number of this size is not supported please try again" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}