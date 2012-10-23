require 'csv'

input_file = ARGV[0]
puts input_file
 
output_file = "output" + input_file
puts output_file 

CSV.open(output_file, "w") do |csv|
	a = 0
	CSV.foreach(input_file) do |row|
		csv << [row[0].to_i/2, row[1].to_i/2]
		a += row[1].to_i
	end
	p a
end
