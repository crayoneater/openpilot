cp /data/openpilot/apk/chrome.apk /storage/emulated/0/
chmod 777 /data/openpilot/apk
chmod 777 /data/openpilot/apk/chrome.apk
pm install -r -d /data/openpilot/apk/chrome.apk
mv /data/openpilot/rwds/*.rwd /storage/emulated/0/
am start -n com.android.chrome/com.google.android.apps.chrome.Main -d autoecu.io