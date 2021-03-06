#Технологично училище "Електронни системи" към ТУ - София http://www.elsys-bg.org/
#11 Б клас
#Номер 9
#Георги Кръчков 

def polski_recording
	def is_this_a_number(symbol)
		symbol.to_s.match(/\A[+-]?\d+?(\.\d+)?\Z/) == nil ? false : true
	end	

	STDOUT.flush
	info = gets.chomp.split(" ")
	stack = []
	info.each do |a|
		if is_this_a_number(a)
			stack.push(a.to_f)
		elsif ((a == "+" || a == "-") && stack.size >= 2)
			second_element = stack.pop()
			first_element = stack.pop()
			case a
				when "+"
					stack.push(first_element + second_element)
				when "-"
					stack.push(first_element - second_element)
			end
		else
			puts "You have some arguments, only 1!"
		end
	end

	if stack.size != 1
		puts "You have done something wrong"
	else
		puts stack.pop()
	end
end

polski_recording
