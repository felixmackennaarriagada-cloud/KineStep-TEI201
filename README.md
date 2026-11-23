# KineStep

**KineStep** es un prototipo de baldosa piezoeléctrica de bajo costo diseñada para capturar la energía cinética generada por el tránsito peatonal y convertirla en electricidad utilizable a pequeña escala. El sistema rectifica y almacena la carga en un capacitor, mientras un microcontrolador Arduino Uno sensa y transmite el voltaje captado en tiempo real hacia el computador.

## Integrantes
* Félix Mackenna
* Vicente Soto
* Fernando Martínez

**Curso:** TEI201 – Taller de Diseño en Ingeniería

## Problema que resuelve
En zonas urbanas y campus universitarios de alto flujo —como el casino de la universidad o, a mayor escala, estaciones del Metro de Santiago (2,1 millones de viajes diarios en días laborales en 2024)— el caminar de miles de personas genera energía cinética que se desaprovecha por completo. Aunque existen soluciones comerciales basadas en inducción electromagnética (como Pavegen), su alto costo y complejidad constructiva las hacen inviables para implementaciones locales a pequeña escala. **KineStep** aborda esta brecha mediante una alternativa piezoeléctrica económica, replicable y con sensado propio, alineada con los Objetivos de Desarrollo Sostenible **ODS 7** (Energía asequible y no contaminante) y **ODS 11** (Ciudades y comunidades sostenibles).

## Componentes necesarios (Hardware)
Para replicar el circuito del prototipo se requieren los siguientes componentes (ver detalle de costos en `hardware/BOM.xlsx`):
* 1x Arduino Uno (con cable USB para conexión al computador)
* 5x Transductores piezoeléctricos
* 4x Diodos (configurados como puente rectificador de onda completa)
* 1x Capacitor electrolítico de 100 µF (almacenamiento y filtrado de carga)
* 2x Resistencias de 100 kΩ (divisor de voltaje factor x2 hacia el pin `A0`)
* 1x Resistencia de 220 Ω (limitadora de corriente para el LED)
* 1x LED rojo (indicador de descarga / carga de prueba)
* 1x Pulsador (para activar la descarga controlada hacia el LED)
* Cables jumper y protoboard / placa de pruebas
* Encapsulado impreso en 3D (archivos en `diseño-3d/`)

## Estructura del repositorio
```text
kinestep-tei201/
├── README.md
├── firmware/
│   ├── main.ino
│   └── libraries/
├── hardware/
│   ├── esquematico.pdf
│   └── BOM.xlsx
├── diseño-3d/
│   ├── encapsulado.f3d
│   ├── planos.pdf
│   └── renders/
├── testing/
│   ├── protocolo_pruebas.pdf
│   └── datos/
└── docs/
    └── reporte_final.pdf
