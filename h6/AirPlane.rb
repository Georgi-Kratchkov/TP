#Технологично училище "Електронни системи" към ТУ - София http://www.elsys-bg.org/
#11 Б клас
#Номер 9
#Георги Кръчков
class AirPlane 
	
	def initialize
		@seats = Array.new(6){Array.new(27){0}}
	end
	
	def  printSeats
        	for i in 0...27 
	        	for j in 0...6
                                if j == 3
					 print " "
				end
				print @seats[j][i]
                        end       
                        print "\n"
                end
	end

	def  add(rvalue) 
		stop = false
		for i in 0...27 
			for j in 0...6
				if (@seats[j][i] == 0)
					if (rvalue == 1)
						@seats[j][i] = 1
						stop = true
					elsif (rvalue == 2)
						if (j < 5) 
							if (@seats[j+1][i] == 0)
							@seats[j][i] = 1
							@seats[j+1][i] = 1
							stop = true
							end
						end
					elsif (rvalue == 3)
						if (j < 4)
							if ((@seats[j+1][i] == 0) && (@seats[j+2][i]) == 0)
							@seats[j][i] = 1
                                       			@seats[j+1][i] = 1
							@seats[j+2][i] = 1
                                       			stop = true
							end
						end
						
					end
				end			 
				if (stop == true)
				break
				end
			end
	    		if (stop == true)
			break
			end
		end
	end
end
	plane =  AirPlane.new
	random = Random.new
	n = 0
	sum = 0
	while (sum < 162) do
		n = random.rand(0...3) + 1
		if ((sum + n) <= 162 )
			plane.add(n)
			sum = sum + n
		end
	end

	plane.printSeats  		
