#Nomer 9
#Georgi Kratchkov
#11B klas
#da se sajdade program, koqto sabira vremeto za opredeleno ime na test
require 'csv'

CSV.open("izpit.csv", "w") do |csv|
	a = 0
	CSV.foreach("feature_scenarios_times.csv") do |row|
		
		if (row[1] == "features/instance_create_update.feature" ) 

			a += row[0].to_f
		end
		csv << [a]
	
	end
	p a

end
