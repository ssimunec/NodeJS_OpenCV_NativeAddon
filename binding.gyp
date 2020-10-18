{
    "targets": [{
        "target_name": "addon",
    'include_dirs': [
        '.',
        '/user/local/lib',
    ],
    'cflags': [
        '-std=c++11',
    ],
    'link_settings': {
        'libraries': [
            '/usr/local/lib/libopencv_*.so'
        ],
    },
    "sources": [ "addon.cc" ]
    }]
}