#Технологично училище "Електронни системи" към ТУ - София http://www.elsys-bg.org/
#11 Б клас
#Номер 9
#Георги Кръчков								

require 'csv'

def process_file_with_csv	
	result = 0
	CSV.foreach("list1.csv") do |row|
		result = result + row[3].to_i	
	end
	p result

end
def process_file
	f = File.open("list1.csv", "r")
	content = f.read
	result = 0
	content.each_line do |line|
		array = line.split(",")
		result = result + array[3].to_i
	end
	p result
end

process_file_with_csv