#include <Preferences.h>
#include "storage_memory.h"

  InternalMemoryStorage::InternalMemoryStorage(const char *namespaceName)
  {
    preferences.begin(namespaceName, false);
  }

  void InternalMemoryStorage::saveStringData(const char *key, const char *value)
  {
    preferences.putString(key, value);
    preferences.end();
  }

  void InternalMemoryStorage::getStringData(const char *key, char *buffer, size_t bufferSize)
  {
    preferences.getString(key, buffer, bufferSize);
  }

  void InternalMemoryStorage::saveUIntData(const char *key, uint32_t value)
  {
    preferences.putUInt(key, value);
    preferences.end();
  }

  void InternalMemoryStorage::getUIntData(const char *key, uint32_t value)
  {
    value =  preferences.getUInt(key, 0);
  }

  void InternalMemoryStorage::deleteData(const char *key)
  {
    preferences.remove(key);
  }