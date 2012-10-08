=begin
					ТУЕС (Технологично училище Електронни системи към ТУ София)
										http://www.elsys-bg.org/
=end									

require "csv"

def process_file_with_csv	
	result1 = 0
	result2 = 0
	CSV.foreach("List.csv") do |row|
	if row[4] == " Ruby"
		result1 = result1 + row[2].to_i	
		else 
		result2 = result2 + row[2].to_i	
		end
	end
	p result1
	p result2

end
process_file_with_csv