# Лабораторная работа 1

Проект на C++20 с CMake Presets, AddressSanitizer, UndefinedBehaviorSanitizer
и автоматической проверкой в GitHub Actions.

## Окружение

Откройте проект в VS Code с расширением Dev Containers и выберите
`Dev Containers: Reopen in Container`. Docker Desktop должен быть запущен.

Команды ниже выполняются в терминале контейнера.

## Обычная сборка

```sh
cmake --preset default
cmake --build --preset default
ctest --preset default
```

## Сборка с санитайзерами

```sh
cmake --preset asan
cmake --build --preset asan
ctest --preset asan
```
