#Технологично училище "Електронни системи" към ТУ - София http://www.elsys-bg.org/
#11 Б клас
#Номер 9
#Георги Кръчков

require "csv"

class Counting
	def initialize 
		@number = Array.new(31){0}	
	end
	

	def number		
		for i in 1...28
			if File.exist?("#{i}.csv")
				CSV.foreach("#{i}.csv") do |row|
					@number[row[0].to_i] = 1 + @number[row[0].to_i]
				end
			end
		end
		
	end

	def who_is_first_and_last 
		first = 0
		n = 0 
		for i in 1...29
			if (first < @number[i] )
				first = @number[i]
				n = i
			end
		end
		print "First is ", n, " with ", first, "\n"
	
		last = first
		n = 0
		for i in 1...29
                        if (last > @number[i] )
                                last = @number[i]
				n = i
                        end
                end
		print "Last is ", n, " with ", last, "\n"	
	end	
	
	def print_reating
		for i in 1...29
			print "#{i}\t", @number[i], "\n"
		end
	end	
end

people = Counting.new

people.number
people.print_reating
people.who_is_first_and_last
