// Generated by Apple Swift version 5.4.2 (swiftlang-1205.0.28.2 clang-1205.0.19.57)
#ifndef MOTIONSDK_SWIFT_H
#define MOTIONSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AWSCore;
@import CoreData;
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MotionSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS_NAMED("HttpLocationData")
@interface HttpLocationData : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class NSNumber;
@class NSString;

@interface HttpLocationData (SWIFT_EXTENSION(MotionSDK))
@property (nonatomic) double accuracy;
@property (nonatomic, copy) NSString * _Nullable activity;
@property (nonatomic) double altitude;
@property (nonatomic, copy) NSString * _Nullable app_stat;
@property (nonatomic) BOOL bat_saver_mode;
@property (nonatomic, copy) NSString * _Nullable bat_stat;
@property (nonatomic) int16_t battery_remaining;
@property (nonatomic, copy) NSString * _Nullable ended_at;
@property (nonatomic) BOOL gps_stat;
@property (nonatomic) double latitude;
@property (nonatomic) BOOL location_permission;
@property (nonatomic) double longitude;
@property (nonatomic) BOOL motion_stat;
@property (nonatomic) BOOL net_stat;
@property (nonatomic, copy) NSString * _Nullable recorded_at;
@property (nonatomic) double speed;
@property (nonatomic, copy) NSString * _Nullable started_at;
@property (nonatomic, copy) NSString * _Nullable timezone_offset;
@property (nonatomic, copy) NSString * _Nullable user_id;
@end

@protocol MotionDelegate;
@class MotionUser;
@class MotionError;
@class NSData;
enum MotionTrackingMode : NSInteger;
@class MotionTrackingCustomMethods;
@class CLLocation;
@class MotionTrip;
@class MotionCreateTrip;
@class MotionGetTrip;
@class MotionTripSummary;
@class MotionTripListener;
@class UNNotificationResponse;

SWIFT_CLASS("_TtC9MotionSDK6Motion")
@interface Motion : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) id <MotionDelegate> _Null_unspecified delegate;)
+ (id <MotionDelegate> _Null_unspecified)delegate SWIFT_WARN_UNUSED_RESULT;
+ (void)setDelegate:(id <MotionDelegate> _Null_unspecified)value;
+ (void)initialize:(NSString * _Nonnull)publishKey :(NSString * _Nullable)baseUrl :(NSString * _Nullable)iOTEndPoint :(AWSRegionType)region;
+ (void)createUser:(NSString * _Nonnull)description handler:(void (^ _Nullable)(MotionUser * _Nullable, MotionError * _Nullable))handler;
+ (void)getUser:(NSString * _Nonnull)userId handler:(void (^ _Nullable)(MotionUser * _Nullable, MotionError * _Nullable))handler;
+ (void)setDescription:(NSString * _Nonnull)description;
+ (void)logoutUserWithHandler:(void (^ _Nullable)(NSString * _Nullable, MotionError * _Nullable))handler;
+ (void)setDeviceToken:(NSData * _Nonnull)deviceToken;
+ (void)startTracking:(enum MotionTrackingMode)trackingMethod options:(MotionTrackingCustomMethods * _Nullable)options;
+ (void)stopTracking;
+ (void)requestLocation;
+ (BOOL)isLocationEnabled SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isLocationTracking SWIFT_WARN_UNUSED_RESULT;
+ (NSInteger)locationPermissionStatus SWIFT_WARN_UNUSED_RESULT;
+ (void)getCurrentLocation:(NSInteger)accuracy handler:(void (^ _Nullable)(CLLocation * _Nullable, MotionError * _Nullable))handler;
+ (void)updateCurrentLocation:(NSInteger)accuracy;
+ (void)startTrip:(NSString * _Nonnull)tripId :(NSString * _Nullable)tripDesc handler:(void (^ _Nullable)(NSString * _Nullable, MotionError * _Nullable))handler;
+ (void)stopTrip:(NSString * _Nonnull)tripId handler:(void (^ _Nullable)(NSString * _Nullable, MotionError * _Nullable))handler;
+ (void)pauseTrip:(NSString * _Nonnull)tripId handler:(void (^ _Nullable)(NSString * _Nullable, MotionError * _Nullable))handler;
+ (void)resumeTrip:(NSString * _Nonnull)tripId handler:(void (^ _Nullable)(NSString * _Nullable, MotionError * _Nullable))handler;
+ (void)forceEndTrip:(NSString * _Nonnull)tripId handler:(void (^ _Nullable)(NSString * _Nullable, MotionError * _Nullable))handler;
+ (void)activeTrips:(BOOL)local handler:(void (^ _Nullable)(NSArray<MotionTrip *> * _Nullable, MotionError * _Nullable))handler;
+ (void)deleteTrip:(NSString * _Nonnull)tripId handler:(void (^ _Nullable)(NSString * _Nullable, MotionError * _Nullable))handler;
+ (void)syncTrip:(NSString * _Nonnull)tripId handler:(void (^ _Nullable)(NSString * _Nullable, MotionError * _Nullable))handler;
+ (void)createTrip:(BOOL)local :(NSDictionary<NSString *, id> * _Nullable)coordinate handler:(void (^ _Nullable)(MotionCreateTrip * _Nullable, MotionError * _Nullable))handler;
+ (void)getTripDetails:(NSString * _Nonnull)tripId handler:(void (^ _Nullable)(MotionGetTrip * _Nullable, MotionError * _Nullable))handler;
+ (void)getTripSummary:(NSString * _Nonnull)tripId handler:(void (^ _Nullable)(MotionTripSummary * _Nullable, MotionError * _Nullable))handler;
+ (void)getTripStatus:(NSString * _Nonnull)tripId handler:(void (^ _Nullable)(MotionTripListener * _Nullable, MotionError * _Nullable))handler;
+ (void)isTripSynced:(NSString * _Nonnull)tripId handler:(void (^ _Nullable)(BOOL, MotionError * _Nullable))handler;
+ (void)toggleEventsWithGeofence:(BOOL)Geofence Trip:(BOOL)Trip Location:(BOOL)Location MovingGeofence:(BOOL)MovingGeofence handler:(void (^ _Nullable)(MotionUser * _Nullable, MotionError * _Nullable))handler;
+ (void)toggleListenerWithEvents:(BOOL)Events Locations:(BOOL)Locations handler:(void (^ _Nullable)(MotionUser * _Nullable, MotionError * _Nullable))handler;
+ (void)getEventsStatusWithHandler:(void (^ _Nullable)(MotionUser * _Nullable, MotionError * _Nullable))handler;
+ (void)getListenerStatusWithHandler:(void (^ _Nullable)(MotionUser * _Nullable, MotionError * _Nullable))handler;
+ (void)notificationOpenedHandler:(UNNotificationResponse * _Nonnull)resposne;
+ (void)setLoggerEnabledWithLogger:(BOOL)logger;
+ (void)subscribeEvents;
+ (void)unsubscribeEvents;
+ (void)subscribeLocation;
+ (void)unsubscribeLocation;
+ (void)subscribeUserLocation:(NSString * _Nonnull)userId;
+ (void)unsubscribeUserLocation:(NSString * _Nonnull)userId;
+ (void)subscribeTripStatus:(NSString * _Nonnull)tripId;
+ (void)unsubscribeTripStatus:(NSString * _Nonnull)tripId;
+ (void)enableAccuracyEngine;
+ (void)disableAccuracyEngine;
+ (void)enableAccuracyEngine:(NSInteger)accuracy;
+ (void)enablePublishing:(BOOL)publish;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class MotionTripDestination;
@class MotionTripOrigin;

SWIFT_CLASS("_TtC9MotionSDK16MotionCreateTrip")
@interface MotionCreateTrip : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified createdAt;
@property (nonatomic, copy) NSArray<MotionTripDestination *> * _Null_unspecified destinations;
@property (nonatomic, copy) NSString * _Null_unspecified tripId;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic) BOOL isEnded;
@property (nonatomic) BOOL isStarted;
@property (nonatomic, copy) NSArray<MotionTripOrigin *> * _Null_unspecified origins;
@property (nonatomic, copy) NSString * _Null_unspecified tripTrackingUrl;
@property (nonatomic, copy) NSString * _Null_unspecified updatedAt;
@property (nonatomic, copy) NSString * _Null_unspecified userId;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class MotionLocation;
@class MotionEvents;
@class MotionLocationReceived;
@class TripStatusListener;

SWIFT_PROTOCOL("_TtP9MotionSDK14MotionDelegate_")
@protocol MotionDelegate
- (void)didUpdateLocation:(MotionLocation * _Nonnull)location;
- (void)didReceiveEvents:(MotionEvents * _Nonnull)events;
- (void)didReceiveUserLocation:(MotionLocationReceived * _Nonnull)location;
- (void)didReceiveTripStatus:(TripStatusListener * _Nonnull)tripStatus;
- (void)onError:(MotionError * _Nonnull)error;
@end


SWIFT_CLASS("_TtC9MotionSDK11MotionError")
@interface MotionError : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable code;
@property (nonatomic, readonly, copy) NSString * _Nullable message;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9MotionSDK12MotionEvents")
@interface MotionEvents : NSObject
@property (nonatomic, copy) NSString * _Nullable activity;
@property (nonatomic, strong) NSNumber * _Nonnull altitude;
@property (nonatomic, strong) NSNumber * _Nonnull course;
@property (nonatomic, copy) NSString * _Nullable createdAt;
@property (nonatomic, strong) NSNumber * _Nonnull distance;
@property (nonatomic, copy) NSString * _Nullable eventSource;
@property (nonatomic, copy) NSString * _Nullable eventType;
@property (nonatomic, copy) NSString * _Nullable eventVersion;
@property (nonatomic, copy) NSString * _Nullable geofenceId;
@property (nonatomic, strong) NSNumber * _Nonnull horizontalAccuracy;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nullable coordinates;
@property (nonatomic, copy) NSString * _Nullable locationId;
@property (nonatomic, copy) NSString * _Nullable nearbyUserId;
@property (nonatomic, copy) NSString * _Nullable recordedAt;
@property (nonatomic, strong) NSNumber * _Nonnull speed;
@property (nonatomic, copy) NSString * _Nullable tripId;
@property (nonatomic, copy) NSString * _Nullable userId;
@property (nonatomic, strong) NSNumber * _Nonnull veritcalAccuracy;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class MotionTripEvent;

SWIFT_CLASS("_TtC9MotionSDK13MotionGetTrip")
@interface MotionGetTrip : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified createdAt;
@property (nonatomic, copy) NSArray<MotionTripDestination *> * _Null_unspecified destinations;
@property (nonatomic, strong) NSNumber * _Nonnull distanceCovered;
@property (nonatomic, strong) NSNumber * _Nonnull duration;
@property (nonatomic, copy) NSArray<MotionTripEvent *> * _Null_unspecified events;
@property (nonatomic, copy) NSString * _Null_unspecified tripId;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic) BOOL isEnded;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) BOOL isStarted;
@property (nonatomic, copy) NSArray<MotionTripOrigin *> * _Null_unspecified origins;
@property (nonatomic, copy) NSString * _Null_unspecified projectId;
@property (nonatomic, copy) NSString * _Null_unspecified tripEndedAt;
@property (nonatomic, copy) NSString * _Null_unspecified tripStartedAt;
@property (nonatomic, copy) NSString * _Null_unspecified updatedAt;
@property (nonatomic, copy) NSString * _Null_unspecified userId;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9MotionSDK14MotionLocation")
@interface MotionLocation : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable userId;
@property (nonatomic, readonly, copy) NSString * _Nullable activity;
@property (nonatomic, readonly, strong) CLLocation * _Nonnull location;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9MotionSDK22MotionLocationReceived")
@interface MotionLocationReceived : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified activity;
@property (nonatomic, strong) NSNumber * _Null_unspecified altitude;
@property (nonatomic, strong) NSNumber * _Null_unspecified latitude;
@property (nonatomic, strong) NSNumber * _Null_unspecified longitude;
@property (nonatomic, strong) NSNumber * _Null_unspecified course;
@property (nonatomic, copy) NSString * _Null_unspecified eventSource;
@property (nonatomic, copy) NSString * _Null_unspecified eventType;
@property (nonatomic, copy) NSString * _Null_unspecified eventVersion;
@property (nonatomic, strong) NSNumber * _Null_unspecified horizontalAccuracy;
@property (nonatomic, copy) NSString * _Null_unspecified locationId;
@property (nonatomic, copy) NSString * _Null_unspecified recordedAt;
@property (nonatomic, strong) NSNumber * _Null_unspecified speed;
@property (nonatomic, copy) NSString * _Null_unspecified userId;
@property (nonatomic, strong) NSNumber * _Null_unspecified verticalAccuracy;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9MotionSDK27MotionTrackingCustomMethods")
@interface MotionTrackingCustomMethods : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, MotionTrackingMode, open) {
  MotionTrackingModePassive = 0,
  MotionTrackingModeReactive = 1,
  MotionTrackingModeActive = 2,
  MotionTrackingModeCustom = 3,
};


SWIFT_CLASS("_TtC9MotionSDK10MotionTrip")
@interface MotionTrip : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified tripId;
@property (nonatomic) BOOL deleted;
@property (nonatomic) BOOL ended;
@property (nonatomic) BOOL started;
@property (nonatomic) BOOL paused;
@property (nonatomic, copy) NSString * _Null_unspecified updatedAt;
@property (nonatomic, copy) NSString * _Null_unspecified createdAt;
@property (nonatomic, copy) NSString * _Null_unspecified syncStatus;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9MotionSDK21MotionTripDestination")
@interface MotionTripDestination : NSObject
@property (nonatomic, copy) NSArray<NSNumber *> * _Null_unspecified coordinates;
@property (nonatomic, copy) NSString * _Null_unspecified createdAt;
@property (nonatomic, copy) NSString * _Null_unspecified id;
@property (nonatomic, copy) NSString * _Null_unspecified locType;
@property (nonatomic) BOOL reached;
@property (nonatomic, copy) NSString * _Null_unspecified tripId;
@property (nonatomic, copy) NSString * _Null_unspecified updatedAt;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9MotionSDK15MotionTripEvent")
@interface MotionTripEvent : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified createdAt;
@property (nonatomic, copy) NSString * _Null_unspecified eventType;
@property (nonatomic, copy) NSString * _Null_unspecified id;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic, copy) NSString * _Null_unspecified tripId;
@property (nonatomic, copy) NSString * _Null_unspecified userId;
@property (nonatomic, copy) NSString * _Null_unspecified userLocationId;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9MotionSDK18MotionTripListener")
@interface MotionTripListener : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull tripId;
@property (nonatomic, readonly) double speed;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) NSString * _Nonnull startedTime;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9MotionSDK16MotionTripOrigin")
@interface MotionTripOrigin : NSObject
@property (nonatomic, copy) NSArray<NSNumber *> * _Null_unspecified coordinates;
@property (nonatomic, copy) NSString * _Null_unspecified createdAt;
@property (nonatomic, copy) NSString * _Null_unspecified id;
@property (nonatomic, copy) NSString * _Null_unspecified locType;
@property (nonatomic) BOOL reached;
@property (nonatomic, copy) NSString * _Null_unspecified tripId;
@property (nonatomic, copy) NSString * _Null_unspecified updatedAt;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class MotionTripSummaryRoute;

SWIFT_CLASS("_TtC9MotionSDK17MotionTripSummary")
@interface MotionTripSummary : NSObject
@property (nonatomic, strong) NSNumber * _Nonnull distanceCovered;
@property (nonatomic, strong) NSNumber * _Nonnull duration;
@property (nonatomic, copy) NSString * _Null_unspecified projectId;
@property (nonatomic, copy) NSArray<MotionTripSummaryRoute *> * _Null_unspecified route;
@property (nonatomic, copy) NSString * _Null_unspecified tripId;
@property (nonatomic, copy) NSString * _Null_unspecified tripStatus;
@property (nonatomic, copy) NSString * _Null_unspecified userId;
@property (nonatomic, copy) NSString * _Null_unspecified syncStatus;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9MotionSDK22MotionTripSummaryRoute")
@interface MotionTripSummaryRoute : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified activity;
@property (nonatomic, strong) NSNumber * _Null_unspecified altitude;
@property (nonatomic, copy) NSArray<NSNumber *> * _Null_unspecified coordinates;
@property (nonatomic, copy) NSString * _Null_unspecified recordedAt;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9MotionSDK10MotionUser")
@interface MotionUser : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull userId;
@property (nonatomic, readonly, copy) NSString * _Nullable userDescription;
@property (nonatomic) BOOL geofenceEvents;
@property (nonatomic) BOOL eventsListener;
@property (nonatomic) BOOL locationListener;
@property (nonatomic) BOOL locationEvents;
@property (nonatomic) BOOL tripsEvents;
@property (nonatomic) BOOL nearbyEvents;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("MqttLocationData")
@interface MqttLocationData : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface MqttLocationData (SWIFT_EXTENSION(MotionSDK))
@property (nonatomic, copy) NSString * _Nullable activity;
@property (nonatomic) double altitude;
@property (nonatomic, copy) NSString * _Nullable app_context;
@property (nonatomic, copy) NSString * _Nullable app_id;
@property (nonatomic) int16_t battery_remaining;
@property (nonatomic) BOOL battery_saver;
@property (nonatomic, copy) NSString * _Nullable battery_status;
@property (nonatomic) double course;
@property (nonatomic, copy) NSString * _Nullable device_manufacturer;
@property (nonatomic, copy) NSString * _Nullable device_model;
@property (nonatomic) BOOL event_listener;
@property (nonatomic) BOOL geofence_events;
@property (nonatomic) BOOL gps_status;
@property (nonatomic) double horizontal_accuracy;
@property (nonatomic) double latitude;
@property (nonatomic) BOOL location_events;
@property (nonatomic, copy) NSString * _Nullable location_id;
@property (nonatomic) BOOL location_listener;
@property (nonatomic) BOOL location_permission;
@property (nonatomic) double longitude;
@property (nonatomic) BOOL nearby_events;
@property (nonatomic) BOOL network_status;
@property (nonatomic, copy) NSString * _Nullable os_version;
@property (nonatomic, copy) NSString * _Nullable recorded_at;
@property (nonatomic) int16_t speed;
@property (nonatomic, copy) NSString * _Nullable tracking_mode;
@property (nonatomic) BOOL trips_events;
@property (nonatomic, copy) NSString * _Nullable tz_offset;
@property (nonatomic, copy) NSString * _Nullable user_id;
@property (nonatomic) double vertical_accuracy;
@end


SWIFT_CLASS_NAMED("MyTrip")
@interface MyTrip : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class MyTripRoute;
@class NSSet;

@interface MyTrip (SWIFT_EXTENSION(MotionSDK))
- (void)addRouteObject:(MyTripRoute * _Nonnull)value;
- (void)removeRouteObject:(MyTripRoute * _Nonnull)value;
- (void)addRoute:(NSSet * _Nonnull)values;
- (void)removeRoute:(NSSet * _Nonnull)values;
@end


@interface MyTrip (SWIFT_EXTENSION(MotionSDK))
@property (nonatomic) double distance;
@property (nonatomic) double duration;
@property (nonatomic) double latitude;
@property (nonatomic) int16_t location_count;
@property (nonatomic, copy) NSString * _Nullable locationId;
@property (nonatomic) double longitude;
@property (nonatomic) int16_t speed;
@property (nonatomic, copy) NSString * _Nullable start_time;
@property (nonatomic, copy) NSString * _Nullable status;
@property (nonatomic, copy) NSString * _Nullable tripId;
@property (nonatomic, copy) NSString * _Nullable update_time;
@property (nonatomic, strong) NSSet * _Nullable route;
@end


SWIFT_CLASS_NAMED("MyTripRoute")
@interface MyTripRoute : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface MyTripRoute (SWIFT_EXTENSION(MotionSDK))
@property (nonatomic) double accuracy;
@property (nonatomic, copy) NSString * _Nullable activity;
@property (nonatomic) double altitude;
@property (nonatomic, copy) NSString * _Nullable entityId;
@property (nonatomic) double latitude;
@property (nonatomic, copy) NSString * _Nullable location_id;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSString * _Nullable recorded_at;
@property (nonatomic, copy) NSString * _Nullable tripId;
@property (nonatomic, strong) MyTrip * _Nullable trip;
@end


typedef SWIFT_ENUM(NSInteger, Trip, open) {
  TripStart = 0,
  TripPause = 1,
  TripResume = 2,
  TripEnd = 3,
  TripForceEnd = 4,
  TripDelete = 5,
  TripSync = 6,
};


SWIFT_CLASS_NAMED("TripEventsLocal")
@interface TripEventsLocal : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class TripsLocal;

@interface TripEventsLocal (SWIFT_EXTENSION(MotionSDK))
@property (nonatomic, copy) NSString * _Nullable created_at;
@property (nonatomic, copy) NSString * _Nullable entityId;
@property (nonatomic, copy) NSString * _Nullable event_source;
@property (nonatomic, copy) NSString * _Nullable event_type;
@property (nonatomic, copy) NSString * _Nullable event_version;
@property (nonatomic, copy) NSString * _Nullable location_id;
@property (nonatomic, copy) NSString * _Nullable trip_id;
@property (nonatomic, copy) NSString * _Nullable user_id;
@property (nonatomic, strong) TripsLocal * _Nullable trip;
@end


SWIFT_CLASS("_TtC9MotionSDK18TripStatusListener")
@interface TripStatusListener : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull tripId;
@property (nonatomic, readonly) double speed;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) NSString * _Nonnull startedTime;
@property (nonatomic, readonly) double pace;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("TripsLocal")
@interface TripsLocal : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface TripsLocal (SWIFT_EXTENSION(MotionSDK))
- (void)addEventsObject:(TripEventsLocal * _Nonnull)value;
- (void)removeEventsObject:(TripEventsLocal * _Nonnull)value;
- (void)addEvents:(NSSet * _Nonnull)values;
- (void)removeEvents:(NSSet * _Nonnull)values;
@end


@interface TripsLocal (SWIFT_EXTENSION(MotionSDK))
@property (nonatomic, copy) NSString * _Nullable created_at;
@property (nonatomic) double distance_covered;
@property (nonatomic) double duration;
@property (nonatomic) BOOL is_deleted;
@property (nonatomic) BOOL is_ended;
@property (nonatomic) BOOL is_paused;
@property (nonatomic) BOOL is_started;
@property (nonatomic, copy) NSString * _Nullable location_id;
@property (nonatomic, copy) NSString * _Nullable sync_status;
@property (nonatomic) BOOL synced;
@property (nonatomic, copy) NSString * _Nullable trip_ended_at;
@property (nonatomic, copy) NSString * _Nullable trip_id;
@property (nonatomic, copy) NSString * _Nullable trip_started_at;
@property (nonatomic, copy) NSString * _Nullable updated_at;
@property (nonatomic, copy) NSString * _Nullable user_id;
@property (nonatomic, strong) NSSet * _Nullable events;
@end


#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
