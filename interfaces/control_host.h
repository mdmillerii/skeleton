/*
 * Generated by gdbus-codegen 2.40.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __INTERFACES_CONTROL_HOST_H__
#define __INTERFACES_CONTROL_HOST_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.openbmc.control.Host */

#define TYPE_CONTROL_HOST (control_host_get_type ())
#define CONTROL_HOST(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_CONTROL_HOST, ControlHost))
#define IS_CONTROL_HOST(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_CONTROL_HOST))
#define CONTROL_HOST_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_CONTROL_HOST, ControlHostIface))

struct _ControlHost;
typedef struct _ControlHost ControlHost;
typedef struct _ControlHostIface ControlHostIface;

struct _ControlHostIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_boot) (
    ControlHost *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_reboot) (
    ControlHost *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_shutdown) (
    ControlHost *object,
    GDBusMethodInvocation *invocation);

  void (*booted) (
    ControlHost *object);

};

GType control_host_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *control_host_interface_info (void);
guint control_host_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void control_host_complete_boot (
    ControlHost *object,
    GDBusMethodInvocation *invocation);

void control_host_complete_shutdown (
    ControlHost *object,
    GDBusMethodInvocation *invocation);

void control_host_complete_reboot (
    ControlHost *object,
    GDBusMethodInvocation *invocation);



/* D-Bus signal emissions functions: */
void control_host_emit_booted (
    ControlHost *object);



/* D-Bus method calls: */
void control_host_call_boot (
    ControlHost *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean control_host_call_boot_finish (
    ControlHost *proxy,
    GAsyncResult *res,
    GError **error);

gboolean control_host_call_boot_sync (
    ControlHost *proxy,
    GCancellable *cancellable,
    GError **error);

void control_host_call_shutdown (
    ControlHost *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean control_host_call_shutdown_finish (
    ControlHost *proxy,
    GAsyncResult *res,
    GError **error);

gboolean control_host_call_shutdown_sync (
    ControlHost *proxy,
    GCancellable *cancellable,
    GError **error);

void control_host_call_reboot (
    ControlHost *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean control_host_call_reboot_finish (
    ControlHost *proxy,
    GAsyncResult *res,
    GError **error);

gboolean control_host_call_reboot_sync (
    ControlHost *proxy,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define TYPE_CONTROL_HOST_PROXY (control_host_proxy_get_type ())
#define CONTROL_HOST_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_CONTROL_HOST_PROXY, ControlHostProxy))
#define CONTROL_HOST_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_CONTROL_HOST_PROXY, ControlHostProxyClass))
#define CONTROL_HOST_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_CONTROL_HOST_PROXY, ControlHostProxyClass))
#define IS_CONTROL_HOST_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_CONTROL_HOST_PROXY))
#define IS_CONTROL_HOST_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_CONTROL_HOST_PROXY))

typedef struct _ControlHostProxy ControlHostProxy;
typedef struct _ControlHostProxyClass ControlHostProxyClass;
typedef struct _ControlHostProxyPrivate ControlHostProxyPrivate;

struct _ControlHostProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  ControlHostProxyPrivate *priv;
};

struct _ControlHostProxyClass
{
  GDBusProxyClass parent_class;
};

GType control_host_proxy_get_type (void) G_GNUC_CONST;

void control_host_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
ControlHost *control_host_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
ControlHost *control_host_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void control_host_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
ControlHost *control_host_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
ControlHost *control_host_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define TYPE_CONTROL_HOST_SKELETON (control_host_skeleton_get_type ())
#define CONTROL_HOST_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_CONTROL_HOST_SKELETON, ControlHostSkeleton))
#define CONTROL_HOST_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_CONTROL_HOST_SKELETON, ControlHostSkeletonClass))
#define CONTROL_HOST_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_CONTROL_HOST_SKELETON, ControlHostSkeletonClass))
#define IS_CONTROL_HOST_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_CONTROL_HOST_SKELETON))
#define IS_CONTROL_HOST_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_CONTROL_HOST_SKELETON))

typedef struct _ControlHostSkeleton ControlHostSkeleton;
typedef struct _ControlHostSkeletonClass ControlHostSkeletonClass;
typedef struct _ControlHostSkeletonPrivate ControlHostSkeletonPrivate;

struct _ControlHostSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  ControlHostSkeletonPrivate *priv;
};

struct _ControlHostSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType control_host_skeleton_get_type (void) G_GNUC_CONST;

ControlHost *control_host_skeleton_new (void);


/* ---- */

#define TYPE_OBJECT (object_get_type ())
#define OBJECT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_OBJECT, Object))
#define IS_OBJECT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_OBJECT))
#define OBJECT_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_OBJECT, Object))

struct _Object;
typedef struct _Object Object;
typedef struct _ObjectIface ObjectIface;

struct _ObjectIface
{
  GTypeInterface parent_iface;
};

GType object_get_type (void) G_GNUC_CONST;

ControlHost *object_get_control_host (Object *object);
ControlHost *object_peek_control_host (Object *object);

#define TYPE_OBJECT_PROXY (object_proxy_get_type ())
#define OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_OBJECT_PROXY, ObjectProxy))
#define OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_OBJECT_PROXY, ObjectProxyClass))
#define OBJECT_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_OBJECT_PROXY, ObjectProxyClass))
#define IS_OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_OBJECT_PROXY))
#define IS_OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_OBJECT_PROXY))

typedef struct _ObjectProxy ObjectProxy;
typedef struct _ObjectProxyClass ObjectProxyClass;
typedef struct _ObjectProxyPrivate ObjectProxyPrivate;

struct _ObjectProxy
{
  /*< private >*/
  GDBusObjectProxy parent_instance;
  ObjectProxyPrivate *priv;
};

struct _ObjectProxyClass
{
  GDBusObjectProxyClass parent_class;
};

GType object_proxy_get_type (void) G_GNUC_CONST;
ObjectProxy *object_proxy_new (GDBusConnection *connection, const gchar *object_path);

#define TYPE_OBJECT_SKELETON (object_skeleton_get_type ())
#define OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_OBJECT_SKELETON, ObjectSkeleton))
#define OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_OBJECT_SKELETON, ObjectSkeletonClass))
#define OBJECT_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_OBJECT_SKELETON, ObjectSkeletonClass))
#define IS_OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_OBJECT_SKELETON))
#define IS_OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_OBJECT_SKELETON))

typedef struct _ObjectSkeleton ObjectSkeleton;
typedef struct _ObjectSkeletonClass ObjectSkeletonClass;
typedef struct _ObjectSkeletonPrivate ObjectSkeletonPrivate;

struct _ObjectSkeleton
{
  /*< private >*/
  GDBusObjectSkeleton parent_instance;
  ObjectSkeletonPrivate *priv;
};

struct _ObjectSkeletonClass
{
  GDBusObjectSkeletonClass parent_class;
};

GType object_skeleton_get_type (void) G_GNUC_CONST;
ObjectSkeleton *object_skeleton_new (const gchar *object_path);
void object_skeleton_set_control_host (ObjectSkeleton *object, ControlHost *interface_);

/* ---- */

#define TYPE_OBJECT_MANAGER_CLIENT (object_manager_client_get_type ())
#define OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_OBJECT_MANAGER_CLIENT, ObjectManagerClient))
#define OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_OBJECT_MANAGER_CLIENT, ObjectManagerClientClass))
#define OBJECT_MANAGER_CLIENT_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_OBJECT_MANAGER_CLIENT, ObjectManagerClientClass))
#define IS_OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_OBJECT_MANAGER_CLIENT))
#define IS_OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_OBJECT_MANAGER_CLIENT))

typedef struct _ObjectManagerClient ObjectManagerClient;
typedef struct _ObjectManagerClientClass ObjectManagerClientClass;
typedef struct _ObjectManagerClientPrivate ObjectManagerClientPrivate;

struct _ObjectManagerClient
{
  /*< private >*/
  GDBusObjectManagerClient parent_instance;
  ObjectManagerClientPrivate *priv;
};

struct _ObjectManagerClientClass
{
  GDBusObjectManagerClientClass parent_class;
};

GType object_manager_client_get_type (void) G_GNUC_CONST;

GType object_manager_client_get_proxy_type (GDBusObjectManagerClient *manager, const gchar *object_path, const gchar *interface_name, gpointer user_data);

void object_manager_client_new (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *object_manager_client_new_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *object_manager_client_new_sync (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);

void object_manager_client_new_for_bus (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *object_manager_client_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *object_manager_client_new_for_bus_sync (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);


G_END_DECLS

#endif /* __INTERFACES_CONTROL_HOST_H__ */