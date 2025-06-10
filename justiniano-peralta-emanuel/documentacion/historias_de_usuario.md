# historias de usuario- Reservas canchas deportivas
## Objetivo Especifico 1: Gestionar reservas de cancha

### HU-01: Como cliente, quiero ver la disponnibilidad de canchas para elegir un horario.
Criterios de aceptacion:
-El sistema muestra los horarios disponibles por dia y tipo de cancha
- Si no hay disponibilidad, el sistema muestra un mensaje claro y no permite avanzar
### HU-02: Como cliente, quiero registrar una reserva para asegurar mi cancha.
Criterios de aceptacion:
-El sistema permite registrar una reserva con fecha, hora y tipo de cancha
-Si el horario ya esta ocupado, el sistema impide la reserva y muestra un mensaje
### HU-03: Como cliente, quiero recibir una confirmacion de mi reserva.
Criterios de aceptacion:
-El sistema envia un mensaje de confirmacion con los detalles
-Si hay error al guardar la reserva, el sistema indica que no fue registrada
### HU-04: Como administrador, quiero visualizar el listado de reservas para controlar el uso.
Criterios de aceptacion:
-El sistema lista todas las reservas con fecha, hora y cliente
-Si no hay reservas, el sistema muestra un mensaje de "sin reservas registradas 
### HU-05: Como cliente, quiero cancelar una reserva para liberar mi horario.
-El sistema permite cancelar hasta 24 horas sin penalizacion
-Si se intenta cancelar fuera del plazo, el sistema muestra advertencia y no permite
### HU-06: Como administrador, quiero modificar una reserva por solicitud del cliente
Criterios de aceptacion:
-El sistema permite cambiar fecha y hora si el nuevo horario esta libre
-Si el nuevo horario esta ocupado, muestra mensaje de conflicto y no guarda cambios

## Objetivo Específico 2: Validar y registrar pagos de reservas

### HU-07: Como cliente, quiero pagar mi reserva en línea para asegurar mi horario.
Criterios de aceptacion:
-El sistema acepta pagos por QR y tarjeta
-Si el pago falla, el sistema no registra la cancha
### HU-08: Como cliente, quiero recibir un comprobante de pago.
Criterios de aceptacion:
-El sistema genera un PDF o codigo de pago tras confirmar la transaccion
-Si no se genera el comprobante, el sistema alerta y guarda intento fallido
### HU-09: Como administrador, quiero ver los pagos registrados para hacer reportes.
Criterios de aceptacion:
-El sistema lista pagos con fecha, monto y cliente
-Si no hay pagos registrados, muestra un mensaje claro
### HU-10: Como cliente, quiero que mi reserva quede inactiva si no pago a tiempo.
Criterios de aceptacion:
-El sistema bloquea la reserva tras cierto tiempo sin pago
-Si la reserva esta bloqueada, no se puede modificar ni confirmar
### HU-11: Como administrador, quiero marcar pagos manuales hechos en efectivo.
Criterios de aceptacion:
-El sistema permite ingresar pago mensual con validacion
-Si se introduce un monto invalido, el sistema muestra error
### HU-12: Como cliente, quiero pagar parte de la reserva como adelanto.
Criterios de aceptacion:
-El sistema permite registrar pagos parciales con saldo restante
-Si el adelanto no cubre el minimo requerido, no permite registrar

## Objetivo Específico 3: Administrar usuarios del sistema

### HU-13: Como administrador, quiero registrar nuevos clientes en el sistema.
Criterios de aceptacion:
-El sistema permite ingresar nombre, contacto y preferencias 
-Si el correo ya esta registrado, muestra error de duplicado
### HU-14: Como cliente, quiero iniciar sesión con mis credenciales.
Criterios de aceptacion:
-El sistema permite modificar datos personales del cliente
-Si se borra accidentalmente un dato clave, muestra advertencia y no guarda 
### HU-16: Como cliente, quiero ver mi historial de reservas y pagos.
Criterios de aceptacion:
-El sistema muestra historial con flechas, montos y estado
-Si no hay historial, muestra mensaje informativo
### HU-17: Como administrador, quiero eliminar usuarios inactivos.
Criterios de aceptacion:
-El sistema solicita confirmacion antes de eliminar
-Si se intenta eliminar un usuario con reservas activas, no lo permite 
### HU-18: Como cliente, quiero cambiar mi contraseña para mantener mi cuenta segura.
-El sistema verifica la anterior y permite definir una nueva segura
-Si la nueva contraseña no cumple con los requisitos, muestra advertencia