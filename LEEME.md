# Parcial2
1 : codigo estudiantil : 104626011549
2: porque que tiene unos metodos con virtual=0 eso obliga a que se tengan que definir en las clases hijas
3: Porque como guardamos todos los vehículos en una misma lista general de Vehiculo y los borramos desde ahí, el virtual hace que el programa reconozca q vehículo es realmente (carro, moto, bus o camión) para borrar primero su parte específica y luego la general. Si no lo tuviera, solo borraría la parte de Vehiculo y se saltaría la de sus clases hijas.
4: Nada no hace nada ; para eso sirve el if que coorrobora que no sea un nullptr , se hizo asi para que cuando se llamen los metodos pues funcionen , porque un puntero vacio no tiene los metodos genera error 
