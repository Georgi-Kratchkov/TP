class Objects

# attr_accessor :value

	def value=(v)
		@value = v
	end
	
	def value
		@value	
	end
	
	def method 
		
	end
	
	private 
	def method_private
		puts ("something")
	end
	
	public 
	def method_public
	
	end
end


o = Objects.new
o.send(:method_private)
o.value = 10
p o.value

